module Main where
import System.IO()
import Data.List (sortBy)
import Data.Ord (comparing)
import Data.Char (toLower, isSpace)
import Text.Read (readMaybe)
import Data.Maybe (fromMaybe)

import UserManagement ( listCustomers )
import RiskManagement ( highRiskCustomerNames )
import CustomType ( CustomerData, Customer(customerId, balance))
import DataAnalysis ( averageAge, averageBalance, averageRisk, riskLevel, topNBalance)


sortCustomersById :: CustomerData -> CustomerData
sortCustomersById = sortBy (comparing customerId)

sortCustomersByBalance :: CustomerData -> CustomerData
sortCustomersByBalance = sortBy (flip (comparing balance))

trim :: String -> String
trim s = filter (not . isSpace) s

query :: IO Double
query = do
  let prompt = "Choose an option:\n\
  \1. List all the customers\n\
  \>>>>>> Customer Data Analysis\n\
  \2.1 Customer average age\n\
  \2.2 Customer average balance\n\
  \2.3 Customer average risk in float\n\
  \2.4 Customer average risk in enum\n\
  \2.5 List top n customer balance\n\
  \>>>>>> Risk Analysis\n\
  \3. List High Risk Customers\n\
  \4. Exit\n\
  \Your response (1, 2.1, 2.2, 2.3, 2.4, 2.5, 3, 4): "
  putStrLn prompt
  input <- getLine
  return (fromMaybe 0 (readMaybe input :: Maybe Double))

processResponse :: CustomerData -> Double -> IO Bool
processResponse customerData response = case response of
    1   -> listAll customerData >> return True
    2.1 -> putStrLn ("Average age: " ++ show(averageAge customerData)++ "\n") >> return True
    2.2 -> putStrLn ("Average balance: " ++ show(averageBalance customerData)++ "\n") >> return True
    2.3 -> putStrLn ("Average risk in float: " ++ show(averageRisk customerData)++ "\n") >> return True
    2.4 -> putStrLn (("Average risk: " ++ riskLevel customerData)++ "\n") >> return True
    2.5 -> topn customerData >> return True
    3   -> highRisk customerData >> return True
    4   -> putStrLn "Goodbye!" >> return False
    _   -> putStrLn "Invalid option. Please try again.\n" >> return True


loopUntilExit :: CustomerData -> IO ()
loopUntilExit customerData = do
    response <- query
    continue <- processResponse customerData response
    if continue then do
        putStrLn "Do you want to continue? (yes/no)"
        confirmation <- getLine
        let cleanedConfirmation = map toLower (trim confirmation)
        case cleanedConfirmation of
            "yes" -> loopUntilExit customerData
            "no"  -> putStrLn "Goodbye!"
            _     -> putStrLn "Invalid option."
    else return ()

highRisk :: CustomerData -> IO ()
highRisk customerData = do
    putStrLn "Enter threshold: "
    input <- getLine
    case readMaybe input :: Maybe Int of
        Just threshold -> putStrLn (highRiskCustomerNames customerData threshold ++ "\n")
        Nothing        -> do
            putStrLn "Please enter a valid number. Try again."
            highRisk customerData

topn :: CustomerData -> IO ()
topn customerData = do
    putStrLn "Enter n value: "
    input <- getLine
    case readMaybe input :: Maybe Int of
        Just n -> do
            let sortedBalance = sortCustomersByBalance customerData
            putStrLn (listCustomers (topNBalance n sortedBalance) ++ "\n")
        Nothing -> do
            putStrLn "Please enter a valid number. Try again."
            topn customerData

listAll :: CustomerData -> IO ()
listAll customerData = do
  let sortedCustomers = sortCustomersById customerData
  putStrLn (listCustomers sortedCustomers ++ "\n")

main :: IO()
main = do
  fileContent <- readFile "CustomerData.txt"
  let customerData = (read fileContent :: CustomerData)
  loopUntilExit customerData

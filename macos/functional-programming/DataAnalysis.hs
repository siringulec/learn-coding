module DataAnalysis where
import CustomType( Customer(lastName, riskNote, firstName, balance, age), CustomerData )


averageAge :: [Customer] -> Int
averageAge customerData = toInt (fromIntegral (sum (ages)) / fromIntegral (length ages))
    where ages = map age customerData

averageBalance :: CustomerData -> Double
averageBalance customerData = sum(balances) / fromIntegral (length balances)
    where balances = map balance customerData

riskValue :: String -> Double
riskValue "High"   = 3.0
riskValue "Medium" = 2.0
riskValue "Low"    = 1.0
riskValue _        = 0.0

averageRisk :: [Customer] -> Double
averageRisk customerData = sum(map (riskValue.riskNote) customerData) / fromIntegral(length customerData)


toInt :: RealFrac a => a -> Int
toInt x = round x

riskLevel :: [Customer] -> String
riskLevel customerData =
    case toInt (averageRisk customerData) of
        1 -> "Low"
        2 -> "Medium"
        3 -> "High"
        _ -> "Unknown"


topNBalance :: Int -> [Customer] -> [Customer]
topNBalance n customerData = take n customerData

module UserManagement where
import CustomType ( Customer(lastName, firstName, customerId, age, email, balance, riskNote), CustomerData )
import Data.List ( intercalate )

maxLen :: CustomerData -> Int
maxLen customerData = maximum
    [ maximum [ length (show (customerId customer))
              , length (firstName customer)
              , length (lastName customer)
              , length (show (age customer))
              , length (email customer)
              , length (show (balance customer))
              , length (riskNote customer) ] | customer <- customerData ]

columnWidth :: CustomerData -> Int
columnWidth customerData = maxLen customerData + 5

formatCustomer :: Customer -> Int -> String
formatCustomer customer width =
    let padding str = str ++ replicate (width - length str) ' '
    in  padding (show (customerId customer)) ++
        padding (firstName customer) ++
        padding (lastName customer) ++
        padding (show (age customer)) ++
        padding (email customer) ++
        padding (show (balance customer)) ++
        riskNote customer

header :: Int -> String
header width =
    let padding str = str ++ replicate (width - length str) ' '
    in  padding "ID" ++
        padding "First Name" ++
        padding "Last Name" ++
        padding "Age" ++
        padding "Email" ++
        padding "Balance" ++
        "Risk Note"

listCustomers :: CustomerData -> String
listCustomers customerData =
    let width = columnWidth customerData
    in  intercalate "\n" (header width : [formatCustomer customer width | customer <- customerData])

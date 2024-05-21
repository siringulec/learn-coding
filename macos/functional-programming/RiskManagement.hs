module RiskManagement where
import Data.List ( intercalate )
import CustomType( Customer(lastName, riskNote, firstName, balance, customerId), CustomerData )


highRiskCustomers :: CustomerData -> Int -> [Customer]
highRiskCustomers customerData threshold =
  filter (\customer ->
            riskNote customer == "High"
           && balance customer > fromIntegral threshold) customerData

highRiskCustomerNames :: CustomerData -> Int -> String
highRiskCustomerNames customerData threshold =
  intercalate "" (map (\customer -> "Id : "
                        ++ show(customerId customer)
                        ++ "\t Name : " ++ firstName customer
                        ++ " " ++ lastName customer
                        ++ "\n") (highRiskCustomers customerData threshold))

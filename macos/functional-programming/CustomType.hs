module CustomType where
import System.IO()

data Customer = Customer { customerId :: Int
                         , firstName :: String
                         , lastName  :: String
                         , age       :: Int
                         , email     :: String
                         , balance   :: Double
                         , riskNote  :: String
                         }
                         deriving (Show, Read)

type CustomerData = [Customer]

# import pandas as pd
# print('\nBelow is a dataframe with three rows and two columns only\n')
# data={'name':['Şirin','Şirin','Şirin'],
# 'surname':['Güleç','Güleç','Güleç']}
# df=pd.DataFrame(data)
# print(df)
# print('\nBelow is a dataframe with age and ID columns added\n')
# age=[20,20,20]
# ID=[20091010054,20091010054,20091010054]
# df['age']=age
# df['ID']=ID
# print(df)
import pandas as pd

df = pd.read_csv('data.csv')

print('data before')


print(df.to_string())

df.dropna(inplace = True)

df.drop_duplicates(inplace = True)

# df['Calories'] = pd.format(df['Calories'])

print(df.to_string())

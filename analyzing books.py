import pandas as pd
df = pd.read_csv('C:\\Users\\Admin\\Downloads\\bestsellers.csv')
# df is a data frame object 
# Get the first 5 rows of the spreadsheet
print(df.head())

# Get the shape of the spreadsheet
print(df.shape)

# Get the column names of the spreadsheet
print(df.columns)

# Get summary statistics for each column
print(df.describe())

df.drop_duplicates(inplace=True)
# inplace true makes changes to the orginal dataframe(csv file)
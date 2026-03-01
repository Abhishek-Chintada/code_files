# Assignment 3

import numpy as np
import pandas as pd

# Data set is based on the Titanic.
# Loading the data set using pandas.(it is a csv file)

df = pd.read_csv("https://raw.githubusercontent.com/datasciencedojo/datasets/master/titanic.csv")

# Subpart A and B

# Preview the data set.
print(df.head(10))
print(df.shape) # Printing the shape of the data set.

for column in df.columns:
    print(f"Label : {column}") # Printing the columns of the data set.
    print(df[column].describe()) # Printing the description of each column.
    print(f"The number of empty spaces are : {df[column].isnull().sum()}") # Printing the number of empty spaces in each column.
    if column == 'Age':
        df[column] = df[column].fillna(df[column].mean()) # Replacing the 0 values in Age column with the mean of the Age column.
    if column == 'Embarked':
        df[column] = df[column].fillna(df[column].mode()[0]) # Replacing the empty spaces in the Embarked column with the mode of the Embarked column.
    # Verification
    print(f"After handling missing values: {df['Age'].isnull().sum()}, {df['Embarked'].isnull().sum()}")
print()

# Subpart C

# Converting the Age and Fare columns to numpy arrays.
age = np.array(df['Age'])
fare = np.array(df['Fare'])

print(np.mean(age)) # Printing the mean of the Age column.
print(np.max(fare)) # Printing the maximum fare paid by a passenger.
print(np.min(fare)) # Printing the minimum fare paid by a passenger.

fare_per_family_member = np.zeros(len(df)) # Initializing an array to store fare per family member.
for row in range(df.shape[0]):
    family_size = df['SibSp'][row] + df['Parch'][row] + 1 # Calculating the family size for each passrenger.
    fare_per_family_member[row] = df['Fare'][row] / family_size  # Calculating fare per family member.
print("Fare per family member :\n\n", fare_per_family_member) # Printing the mean fare per family member.

# Subpart D

df_female = df[(df['Sex'] == 'female') & (df['Pclass'] == 1)] # DataFrame of female passengers in first class.
print(df_female['Fare'].mean()) # Printing the mean fare of the above stated passengers.
print(len(df_female[df_female['Age'] > 60])) # Printing the number of female passengers in first class who are over 60 years old.

# Subpart F

# Function to calculate the number of children, adults and seniors in a dataset.
def age_group(df):
    children, adults, seniors = 0, 0, 0
    for age in df['Age']:
        if age < 18:
            children += 1
        elif age>=18 and age<60:
            adults += 1
        else:
            seniors += 1
    return children, adults, seniors

children, adults, seniors = age_group(df)
print(f"Number of children: {children}, Number of adults: {adults}, Number of seniors: {seniors}")

# Subpart E

Average_Age_by_gender = df.groupby('Sex')['Age'].mean() # Calculating average using the groupby function.
print(Average_Age_by_gender)
Survival_Rate_by_Pclass = df.groupby('Pclass')['Survived'].mean() # Calculating survival rate by Pclass using the groupby function.
print(Survival_Rate_by_Pclass)
Survival_Rate_by_Gender = df.groupby('Sex')['Survived'].mean() # Calculating survival rate by Gender using the groupby function.    
print(Survival_Rate_by_Gender)
print("Females have a higher survival rate!")

# Subpart G

print("The first passenger class has the highest survival rate.")
print("Yes, gender played a significant role in the survival rates, women were prioritized.")
print("This data gives us insights into the emergency protocol followed during the Titanic disaster.\nPrimarily, the first class passengers and women were given the utmost priority.")
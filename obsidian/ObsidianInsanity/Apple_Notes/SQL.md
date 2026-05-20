CS50

- [ ] A flat file database is simply representing data using simple text files. but a general text files cannot do the job as it is harder to separate columns.
- [ ] A csv is one type of a flat file data base where each column is separated using commas. It is in general more common than the tab separated values.
- [ ] The first row in general is considered a special row by most software as it contains the names of the columns to be printed.(these column names are called the headers.)
- [ ] If an element of the row contains a comma, then we can use the double quotes as the escape sequence characters (similar to the / in the c language )
- [ ] A relational database contains data which are related to each other in some or the other way.
- [ ] SQL means Structured Query Language.
- [ ] SQL follows the CRUD rule which means create, read, update and delete data from the databases.
- [ ] We will be using sqlite3 for learning the basics.
- [ ] To create a sqlite file, we can use the sqlite3 FILE name.
- [ ] We can work with the csv files using the sqlite3 using the .mode csv command.
- [ ] Any command that starts with a . Means that the command configures the sqlite program itself.
- [ ] We can import a csv data file using the .import <csv file name> <some name for the table in the data base created>
- [ ] We can use the .quit to quit the terminal of the sqlite3.
- [ ] We can use the .schema command to the sqlite terminal to find out the mapping of the data base or the structure of the data base. By using this command we can find the actual sql code that needs to be written for the .import we have used before.(similarly for any other commands we have written)
- [ ] If not defined, the sql actually assumes that the data type is strings or more ‘sqlly’, text.
- [ ] SELECT columns FROM table;  (command in the terminal)
- [ ] To select every column just use the * wildcard.



![[SCR-20251224-ozpa.png]]


![[SCR-20251224-pfpy.png]]


- [ ] The above stated functions are all available in the sqlite.
- [ ] To demonstrate literals and strings in sqlite we use the single quotes.
- [ ] Select statements are used for showing data and the insert statements are used to put more data into the existing ones.
- [ ] Other than original keywords all other words in the syntax of sqlite are intended to be enclosed in double quotes and the normal literals or strings are to be enclosed in single quotes.
- [ ] To include a single quote inside a string which is represented by single quotes we will have to use two single quotes consecutively. ( pretty weird syntax )
- [ ] While using the like keyword we have to use the % to indicate anything may come after the before indicated part.
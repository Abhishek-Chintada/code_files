IITH
- [ ] Algorithm is a process or a method for solving a problem.
- [ ] Python is a high level language.
- [ ] Assembly languages are low level languages.
- [ ] IDE means integrated development environment. These are the environments which are used for writing the code.
- [ ] We can use the python as a calculator.
- [ ] Casting means converting one data type to another.
- [ ] Variables provide with a name to the objects.
- [ ] Python always goes from left to the right.
- [ ] Python is a modular language
- [ ] Polymorphism means that the same function does different things to different objects.
- [ ] We cannot directly use the name of inbuilt functions as the name of a variable.
- [ ] To find the address of a we can use the fuction id();
- [ ] For some variable to be using at the function of e is c type, we have to have the same memory allocated, but if we used the == operator, it only compares the value.
- [ ] We can use the ** to send a number to the index of another number.
- [ ] In python we consider the variables as names.
- [ ] We use the assignment operator for assigning a value.
- [ ] An assignment operator can make a second name refer to the same value.
- [ ] There is no rule that says a value can only have one name.
- [ ] If two names refer to the same value this doesn’t link the two names. Reassigning one of them won’t reassign the other variable.
- [ ] In python memory is managed dynamically. ( automatically cleans yp value that have no references.)
- [ ] Assignment makes only two names but will have only one value.
- [ ] Lists are mutable.
- [ ] Immutable values are those whose content cannot be changed. Opposite is the mutable objects.
- [ ] Assigning the same name to a different object the name rebinding is used.
- [ ] Methods help us to change the mutable objects.
- [ ] For example append method is used to change the data of a list.
- [ ] The process of changing the value of mutable objects is called mutating.
- [ ] Mutable aliasing.
- [ ] Note that the immutable values cannot alias.
- [ ] The data type int are immutable
- [ ] Lists are mutable
- [ ] Strings are immutable.
- [ ] Each element is a reference to an object In the list.
- [ ] We can assign a name to an element in the list.
- [ ] Lists are defined with square braces whereas tuples are defines with normal braces.
- [ ] Tuples are immutable.
- [ ] Tuples does not support item assignment and we cannot use append for a tuple.
- [ ] A function can define and use its own variables.
- [ ] These re named as the local variables and the global variables.
- [ ] Indentation error refers to the lack of spaces as the python language only solely depends on the indentation to run the programs.
- [ ] We can use the range function to make lists
- [ ] %whos is used to show all the variables and the values given to them up until that point in that program.
- [ ] %reset is used to clear the values given to the variables.
- [ ] s.count(letter to be counted in the string) is used to count how many times the given letter repeated in the given string s.
- [ ] s.replace(word present, word to be replaced) is used to replace a particular part of the given string s with another word.
- [ ] We may use the f-strings, or the percentage format, or the general comma format to add a variable print to the sentence print.
- [ ] A variable defined in the function is a local variable and a variable defined outside the function is a global variable.
- [ ] Range(start, stop, step)
- [ ] Zip function allows us to iterate through two lists 
	- [ ] We can use the set of a list function to create a list of the unique elements of the list
	- [ ] A dictionary is defined using the curly braces
	- [ ] numpy library of python is like a c extension for python.
	(START OF NUMPY)
	- [ ] Bumpy allows us to create array
	- [ ] We can also create 3d arrays
	- [ ] Vectorisation component is used for a faster computation.
	- [ ] An array does not have commas separating the elements of it whereas the list has commas separating the elements 
	- [ ] A vector is a one dimensional array 
	- [ ] We can also use numpy to create 2d and 3d arrays
	- [ ] (Variable).ndim is used to find the dimensions of the array
	- [ ] (Variable).shape is used to find the representation I.e the n*m representation of the array
	- [ ] (Variable).transpose() is used to get the transpose of the array
	- [ ] (Variable).size is used to find the no of element in the array
	- [ ] Np.linspace(start, stop, no of intervals) is used to create an array effortlessly.
	- [ ] Np.arange(start, stop, step size) is also used to create arrays.
	- [ ] If we know the step size we use the arrange function whereas if we know the no of intervals we use the linespace
	- [ ] Also linespace includes the endpoint but the arrange does not include the endpoint
	- [ ] (Variable).dtype is used to find the type of the values in the array
	- [ ] Np.zeroes (shape of the array) is used to create an array of the designated shape with all the elements as 0
	- [ ] Np.eye(size) is used to create an identity matrix or array of the designated size
	- [ ] Note that the lumpy arrays are homogeneous that is they can only have elements of the same data type
	- [ ] Note that the arrays indexing starts from the number 0 which is different from the indexing of elements done in the general mathematical matrices
	- [ ] We can also stack and slice the arrays using the numpy functions
	- [ ] For vertical stacking the no of columns should be same whereas the horizontal stacking requires same no of rows
	- [ ] Numpy arrays have a fixed size whereas the standard python sequences have dynamic nature.
- [ ] NumPy arrays facilitate advanced mathematical and other types of operations on large numbers of data. Typically, such operations are executed more efficiently and with less code than is possible using Python’s built-in sequences.
	- [ ] The row axis is termed as the axis 0 and the column axis is termed as the axis 1
	- [ ] (Name of array)\[(axis 0 term)\]\[(axis 1 term)\] is used to refer to the elements of the array
	- [ ] We can also use negative indexing to refer to the elements 
	- [ ] The primary reason for the numpy superior performance is that : normally the lists are stored at random places in memory but in the case of arrays these are placed in consecutive places in the memory which accounts for the significant increase in performance.
	- [ ] Broadcasting also increases the performance of the pythons numpy library
- [ ] Broadcasting automatically expands the smaller array to match the shape of the larger one, enabling element-wise operations with minimal code and without the memory overhead of creating unnecessary intermediate arrays.
- [ ] np.random module is also highly useful for generating arrays with random numbers or for statistical simulations.
- [ ] Broadcasting provides a means of vectorizing the array operations so that looping occurs in c rather than the python language.
- [ ] Sometimes broadcasting is a bad idea as it leads to inefficient use of the memory and in turn causes slow computation
- [ ] Under scroll is used in the python language to create a temporary variable.
- [ ] The rule of broadcasting:
1. The second arrays dimensions should be of the type 1xn then n should either be one or n should be equal to the corresponding number of the another array.
- [ ] Two dimensions are compatible for broadcasting when:
1. They are equal
2. One of them is 1
- [ ] Ij is called the matrix indexing and xy is called the cartesian indexing.
- [ ] Default indexing is the xy or the cartesian indexing. We can also consider the matrix indexing as the transpose of the cartesian indexing.
- [ ] We can use matplotlib to plot things in the python language.
- [ ] The under scroll is used to represent the throwaway variable.
- [ ] The np.random.rand function is used to generate random floating point numbers of arrays.
- [ ] We can use (array1)@(array2) or np.dot((array1), (array2)) for the dot product of two matrices.
- [ ] In any programming language, we cannot represent all the decimal numbers possible as the storage of a number is not infinite.
- [ ] So, we get the floating point error.
- [ ] **Python’s decimal objects can (and should) be instantiated from strings****.**
- [ ] Pandas can be used to detail the statistics in python
- [ ] Variance is of two types: population and sample.
- [ ] The name pandas comes from the name panel data.
- [ ] We use series and data frames in the pandas library.
- [ ] A series is a one dimensional labelled column and a data frame is a 2 dimensional labelled grid.
- [ ] Using pandas we can import, display, manipulate and export data.
- [ ] We can say that pandas is Microsoft excel in steroids.
- [ ] We create a series by using the pd.Series() object.
- [ ] We can access the certain elements of the series by using the (series_name).loc\[label_name\];
- [ ] To print or access a value in a series we use the loc property.
 To consider the labelling as done in other programming languages, like starting from 0 and going till n-1, we can use the series_name.iloc\[variable_name\]
- [ ] The series can also take in the python dictionary and label the indices automatically.
- [ ] Pandas generally calculates the  variance by using the n-1 method. It is generally called the (Bessel's correction) 
- [ ] The delta degrees of freedom(ddof)is the parameter which is used in statistical calculations which accounts for the number of estimated parameters in a formula.
- [ ] Eg. If you have three numbers and know their mean is 10, you can choose the first two numbers freely (e.g., 5 and 10). However, the third number must be 15 to maintain the mean of 10. You had three values but lost one degree of freedom due to the constraint of the fixed mean, leaving you with 2 degrees of freedom.
- [ ] The value (n - doff) is used for calculations in the statistics .
- [ ] For population we use n but for a sample we use the n-1.  (Here the doff is 1).
- [ ] Doff may not provide a more accurate solution but provide a more unbiased solution to the statistical problem.
- [ ] Usually for a sample we use the doff to be 1.
- [ ] Quantiles are the lines which divide the data into equally sized groups.(This is the technical definition.)
- [ ] Percentiles are the quantiles which divide the data into 100 equally sized groups.
- [ ] So calculating the quantiles and percentiles just boils down to calculating how many values are less than the given value.
- [ ] Quantiles can be calculated in many different ways .
- [ ] For a small dataset, different methods may give varying results. But for a large dataset, all the methods give the same results(almost).
- [ ] Outliers are the data points which do not follow the specific pattern that was followed by other  data points. 
- [ ] These outliers can be challenging because they make it hard to deal with the data set.
- [ ] One of the way to deal with the outliers is to do TRIMMING. It means we do not consider the data points which are too low or too high. For example we may not consider the data points which are below the 5 percentile and above the 95 percentile.
- [ ] Since we are throwing away data in the trimming session, we may have problems when we do not have a lot of data to begin with. So the second method to deal with the outliers is WINDSORING.
- [ ] In windsoring we do not delete the data as we did with the trimming but we set it equal to the least and the highest percentile we considered.
- [ ] But the point is none of the default methods like the above two are good to be used. We may use them to save time, but the result is not accurate and completely reliable.
- [ ] The best way to deal with outliers is to stop, think, and then if possible find a way or pattern that the outliers are formed and then address them in a suitable way.
- [ ] Inter quartile range is the difference between the third and the first quartiles.

# Effects of the outliers.
- [ ] Mean jumps sharply due to the outliers. 
- [ ] Median remains almost unchanged due to the outliers.
- [ ] Standard deviation is greatly varied due to the outliers.
- [ ] IQR is unaffected by the outliers. (IQR is more robust.)

# Covariance
## Why covariance when we can find the x variance and the y variance ?
- [ ] It is because even two differently oriented  set of data points can also have the same x variance and y variance!
- [ ] To address this problem we introduce a new variable called the covariance.

![[SCR-20251028-lppl.png]]


![[unknown.gif]]

- [ ] The above picture represents the covariance matrix. The covariance of the same variable taken twice gives us the variance of the variable.
- [ ] The covariance of x and y is the same as the covariance of y and x.

# Correlation


![[SCR-20251028-meqg.png]]

- [ ] This is the definition of the correlation of the data set.
- [ ] Covariance is affected by the scaling. But the correlation is unaffected by the scaling.
- [ ] A high correlation does not mean that the variables x and y are not dependent on each other. There may be a third variable which governs their relation in the background and hence we say that correlation does not mean causation. That is x doesn’t cause y and vice versa.
- [ ] The SD line in statistics is a line which passes through the mean of the x and y variables of the scatter plot and also passes through all the points which are having equal standard deviation values from the x mean and the y mean.
- [ ] The slope of the SD line is equal to the ratio of the standard deviation of y to the standard deviation of x.
- [ ] The SD line is different from the regression line as it does not take into account the relationship between the variables.
- [ ] The SD line is less steeply sloped by a factor of r as compared to the regression line where r is the coefficient of correlation.
## Data Science with python in edx
- [ ] The data matrix x is of the type (n, p) where n are the number of observations and p are the predictor variables.
- [ ] Pandas actually treats a single column of data as a series and a group of columns as a data frame. So sometimes  some functions may only accept either series, or data frames or even only numpy arrays. So be careful of the data frame you use.
- [ ] We may assume an unknown function f which relates the predictor variable x to the outcome variable as f(x). A statistical model is used for the prediction of the function f.
- [ ] For some problems, what is important is obtaining f(cap), our estimate of f. These are called inference problems.
- [ ] In other cases, we do not care about the specific form of f(cap), we just want to make our predictions y(cap) as close to the observed values y’s as possible. These are called prediction problems.
- [ ] Note that a cap over a variable represents an estimate of it.
- [ ] One of a simple prediction model is using the similar data available to us. For example, if we go to the doctor for headache, the doctor sees for a similar conditioned patient he had treated before and treats you in the same manner. Similarly we can say that the estimate of the required data may be equal to the value of the outcome variable for the nearest neighbour. If we would like to consider 2 nearest variables, it is k nearest neighbour model and we find the average of the outcome variables of the nearest neighbours and equate it to the estimate y(cap).
- [ ] We can also consider a naive model where the average of all the y’s is calculated and considered the base line for all other estimations. As the value of k increases in the before problem, it gets closer to the naive or the average model.
- [ ] Matplotlib actually connects the consecutive points in the data set. So if the points are not in order then the plot will be a sphagetti mess.
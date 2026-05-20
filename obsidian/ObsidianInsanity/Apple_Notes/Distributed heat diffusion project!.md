(Powered by gemini!)

Main theme : this is a simulation about how the heat is distributed over a 2d metal plate over the time. Math is solved by C (for faster computation), an api is created using go language to handle the simulation requests and python is used to generate the initial complex conditions and visualise the results.
Things to be learnt :
1. **We need to create a high performance solver of partial differential equations using the** <b><u>finite difference method.</u></b> creating a 1d flat array - map it to 2d coordinates to optimise the cpu cache - manual memory management - **iterative solver -** <b><u>Jacbi or gauss Seidel method  (for updating the grid temperatures)</u></b>
2. **Go - the API manager - building a** <b><u>REST API</u></b> **- using** <b><u>cgo</u></b> **to directly call the c functions into the go language’s code -** <b><u>concurrency</u></b> (whenever a request comes in, go should spawn a new coroutine to run the heavy c simulation without blocking the server.)
3. **Python - The analyst -** <b><u>Numpy</u></b> **to create complex initial states - testing the process using a small python code to check the viability of the c code - fetch the data and create a heat map using the matplotlib or seaborn libraries.**
4. For technical workflow refer the gemini instructions.
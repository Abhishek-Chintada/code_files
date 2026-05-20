Gathered from various resources. (@Aa1234567890 -> WIFIIITHPW)

- [ ] 1 inch  **(unknown attachment: com.apple.notes.inlinetextattachment.calculateresult)** =25.4 millimetres.
- [ ] Scale=Drawing Size:Actual Size
- [ ] To check whether a number is prime or not, we can just check the divisibility by all the prime numbers which are less than the square root of the given number.
- [ ] Wifi is just a super fast conversation between the phone and the router in the form of binary codes.
 Therapeutic index is the ratio of a drugs uses to its side effects.
- [ ] A csv file literally means comma separated values. These can be open in any kind of spreadsheet files.
- [ ] Json means java script object notation.
- [ ] The Fourier transform is used to decompose a mixed up wave of different frequencies into the individual frequencies .

![[SCR-20251103-jnzj.png]]

- [ ] The basic way in which these Fourier transform are used is for sound editing. We can separate out the high pitched annoying frequencies and remove them from the original sound elegantly using it.
- [ ] The Fourier transform has many other  uses as well which are innumerable to the advancement of science.
- [ ] Mass of an electron is 0.511 MeV.
- [ ] The fundamental theorem of algebra is that the complex plane is closed, that is what is done in the complex plane stays in the complex plane.
- [ ] (AIMS Portal Hack!) 
Guys, if you want to see grades for the courses whose feedback was not given in AIMS, paste the following code in browser console after clicking inspect in dev tools



const walker = document.createTreeWalker(document.body, NodeFilter.SHOW_COMMENT, null, false);

let commentNode;
while (commentNode = walker.nextNode()) {

  if (commentNode.nodeValue.includes('gradeId')) {

    const fragment = document.createRange().createContextualFragment(commentNode.nodeValue);

    commentNode.parentNode.replaceChild(fragment, commentNode);
    break; 
  }
}



multiSelectCombo({
    "height": "150",
    "width": 250,
    "selectorElement": "#gradeId"
});
multiSelectCombo({
    "height": "150",
    "width": 250,
    "selectorElement": "#isGrade"
});
multiSelectCombo({
    "height": "150",
    "width": 250,
    "selectorElement": "#resultId"
});



const grades = \[
  { gradeId: "1", gradeDesc: "A+" },
  { gradeId: "2", gradeDesc: "A" },
  { gradeId: "3", gradeDesc: "A-" },
  { gradeId: "4", gradeDesc: "B" },
  { gradeId: "5", gradeDesc: "B-" },
  { gradeId: "6", gradeDesc: "C" },
   { gradeId: "7", gradeDesc: "C-" },
  { gradeId: "8", gradeDesc: "D" },
  { gradeId: "9", gradeDesc: "P" },
\];

let A = "";
let C = 0;
for (let B = 0; B < grades.length; B++) {
  if (C < grades\[B\].gradeDesc.length) {
    C = grades\[B\].gradeDesc.length;
  }
  A += '<option value="' + grades\[B\].gradeId + '">' + grades\[B\].gradeDesc + "</option>";
}
$("#gradeId").html(A);

// Re-apply multi-select UI
multiSelectCombo({
  height: "150",
  width: C * 8 > 250 ? C * 8 : 250,
  selectorElement: "#gradeId"
});



![[SCR-20251201-kpwo.png]]


- [ ] We can actually make c lang to do calculations and use the python to execute the code, so basically this will allow us to make faster programs. This is how we do it.
[**Sign-in**](https://docs.google.com/document/d/1zv0nkSYwHLEIREPdrEGQ9VJc61fWaBFcJHX92pL65Uo/edit?tab=t.0)
- [ ] Note that while compiling the c code you should use this type of calling command in terminal:
[**Sign-in**](https://docs.google.com/document/d/1MFKmdFH5YwvuOF3dbD5nAkRzmCFeC5F-iNpQdEa2w5s/edit?tab=t.0)


# Stirling’s approximation.


![[SCR-20251225-qfuj.png]]


![[SCR-20251225-qggf.png]]


- [ ] The accuracy of the Stirlings approximation increases with the increase of n.

## Thermodynamics Slander!

- [ ] Why are reversible processes not possible in nature? Because nature trades the efficiency for speed !

## Engineering Slander!

- [ ] 1 degree = 0.017453 radians.
- [ ] The constant of integration in the integrals is considered to be an additional degree of freedom.!
- [ ] In a sense we can say that the second derivative is in essence comparison of the considered value with the average of the values around it. (Try to wrap your head around it).
- [ ] Normal Distribution: it is shaped like a bell, and is parametrized by the mean and the standard deviation. it has a symmetric peak (symmetric about the mean)
- [ ] Uniform Distribution : the distribution is discrete and every value in the given range is equally likely to occur. that means there is no bias involved in the particular outcome. it gives a rectabgular shape on the graph. defined by the minimum and the maximum. note that this has a constant probability density function throughout its entire range.

# How does the internet work?

- [ ] LAN - local area network. (Note that even if the name of the network is lan, they may also spread over large areas.)
- [ ] If the networking needs to be done for the whole world then it is called a World Wide Web.
- [ ] Basically a network is a way by which two computers talk to each other.
- [ ] Actually the fibre optical cables are laid even underneath the sea, (these are called the submarine cable ) which are used to connect the pcs across the globe.
- [ ] HTTP - hyper text transfer protocol.
- [ ] While communicating over http, we will have a request and a response. These two things always happen in the http. Request is made from the client or the local machine you use and the response is given by the server or the host.
- [ ] A server always responds with a status code which represents the answer of the server. ( a yes or a no) generally these status codes are three digit long.



![[SCR-20260105-ipnm.png]]




![[SCR-20260105-irbh.jpeg]]


- [ ] The first word of the start line is a method (here it is called GET), the second part is the file we are looking for (target), and the last part is the version of the http we are using.
- [ ] Headers contain extra pieces of information like the web browser we are using etc.
- [ ] The body of a request is generally empty as we are just requesting something. This body part is used mostly by the servers to send the information.



![[SCR-20260105-issf.jpeg]]


- [ ] The http 1.0 is a stateless protocol. That means once the information is conveyed the connection between the server and the client is broken, that is the connection is not maintained.
- [ ] The http is based on the TCP/IP
- [ ] Even though it seems simple enough, but in reality we will have to send multiple requests to get to a webpage. They may range from some ten to hundreds of requests for a single webpage.
- [ ] Why so many requests? It is because we will have to call the html file, the css file, the javascript file, photos, videos etc all individually by separate requests!
- [ ] IP Addresses - Internet Protocol Addresses.
 

## Shit learn from projects !

- [ ] Java and C are used for DSA. Leetcode and hackerRank have good problems for this purpose.
- [ ] Python can be used for automation and math. In general, use it to automate our boring tasks.
- [ ] Go can be kept as a hobby language and use it to build small CLI and web servers.
- [ ] An API stands for Application Programming interface. If we are the Client in a restaurant, then the Kitchen is the Server. We cannot ourselves get into the sever and get the data ( food ) as it is dangerous, so we take the help of the Waiter (the API). In essence an api is the fancy way of saying “a messenger that allows two computer programs to talk to each other”.
- [ ] REST stands for Representational State Transfer. It is an architectural style for building web services and allow different systems to communicate over the internet. This Rest is like a rulebook for the waiter analogy from the previous point of view.
- [ ] In general two computers talk to each other in JSON language, just like you and the waiter talk to each other in English language. A JSON is just a set of data in a set of curly braces.
- [ ] In rest we use the standard http methods to define these actions (all these aer named from the perspective of the User(The Client)):
1. GET : retrieve data.(Read)
2. POST : send new data (Create)
3. PUT/PATCH : update existing data (Update)
4. DELETE : remove data (Delete)

- [ ] The basic core concept for the go’s api management and json file management in websites :
1. Reading r (r is what came in and it is a pointer to a big struct)
2. Tool w (w is what goes out, it is an interface with methods to write data)
3. The flow (we read from the r (users input) and write to w(give the output))

- [ ] The symmetry or mirror concept in the api :
1. To read (input) : json.NewDecoder(r.Body).Decode(&data) -> take the data from the request’s body and put the result in the variable data.
2. To write (output) : json.NewEncoder(w).Encode(data) -> look at the ResponseWriter encode my variable (data) and blast it out to the user.
- [ ] The following code statements in the main function have the following uses (consider the main function as the receptionist ) :
1. http.HandleFunc : “write down in the rulebook that visitors asking for a specific state go to the respective department”
2. fmt.Println : we use this even though there is no need just to make sure that the code is running properly and the server is AOK.
3. http.ListenAndServe : “Unlock door no 8080 and stand there forever, waiting for the people to knock.”
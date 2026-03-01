package main

import (
	"fmt"
	"strings"
	"unicode/utf8"
)
func main() {
	var mystring string = "résumé"
	var index = mystring[0]
	fmt.Println(mystring)
	fmt.Println(len(mystring)) // just counts the number of bytes
	fmt.Println(utf8.RuneCountInString(mystring)) // actually counts the number of characters we can see in the string.
	var mystring1 = []rune("résumé")
	fmt.Println(mystring1) // the above two lines of syntax are useful to get rid of unnecessary jumps in the indexing happening during the normal string indexing.
	fmt.Printf("%v, %T\n", index, index)
	for i, v := range mystring {
		fmt.Println(i, " ", v)
	}
	var myrune rune = 'a'
	fmt.Printf("myrune = %v\n", myrune)
	// note that string data type is immutable in the go lang.
	var stringslice = []string{"l", "a", "v", "a", "d", "e"}
	var purestring string = "lavade" // this type of pure strings are immmutable but the stringslices are mutable!
	var strconcat = ""
	for i := range stringslice {
		strconcat += stringslice[i]
	}
	fmt.Printf("1-%v\n", strconcat) // this is very inefficient as the strings are immutable and the golang creates new strings every time to make the concatenation.
	
	// take a good look at the shit below to concat strings from a string data type
	var strbuilder strings.Builder
	for j := range purestring {
		c, _ := utf8.DecodeRuneInString(purestring[j:])
		strbuilder.WriteString(string(c))
	}
	var catstr = strbuilder.String()
	fmt.Printf("2-%v\n", catstr)
	
	// take a good look at the shit below to concatenate strings from a string slice data type.
	var strbuilder1 strings.Builder
	for k := range stringslice {
		strbuilder1.WriteString(stringslice[k])
	}
	var catstr1 = strbuilder1.String()
	fmt.Printf("3-%v\n", catstr1)
}
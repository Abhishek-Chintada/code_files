package main

import (
	"fmt"
	"log"
	"net/http"
	"encoding/json"
)

type Article struct {
	Title string `json:"Title"`
	Desc string `json:"desc"`
	Content string `json:"content"`
	
}

func allArticles(w http.ResponseWriter, r *http.Request) {
	articles := Articles{
		Article{Title:"Test Title", Desc: "Test description", Content:"Hello World"},
		
	}
	fmt.Println("Endpoint hit All Articles endpoint.")
	json.NewEncoder(w).Encode(articles)
}

type Articles []Article

func homepage(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "Homepage Endpoint Hit")
}

func handleRequests() {
	http.HandleFunc("/", homepage)
	http.HandleFunc("/articles", allArticles)
	log.Fatal(http.ListenAndServe(":8081", nil))
}

func main() {
	handleRequests()
}
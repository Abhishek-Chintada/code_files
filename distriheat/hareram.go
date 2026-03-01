package main

import (
	"fmt"
	"net/http"
)

// This is the waiter taking the order
func startSimulation(w http.ResponseWriter,r *http.Request) {
	// We are sending this raw JSON text back to whoever knocked.
	fmt.Fprintf(w, `{"status": "success", "message": "Simulation started in C!"}`)
}

func main() {
	// Tell go: if someone knocks at the start, run the startSimulation function
	http.HandleFunc("/start", startSimulation)
	// keep the program running indefinitely, listening on port 8080
	fmt.Println("API listening on http://localhost:8080")
	http.ListenAndServe(":8080", nil)
}
fn main() {
    println!("1. Hello, World!"); // here we are using a string literal.
    let greeting = "Hello, World!"; // this is a string literal which is a type of &str
    println!("2. {}", greeting); // slices in general only borrow data, and they are immutable and efficient as they only hold references. (no addn memory allocation)
    // while string slices are immutable, String is a growable, heap-allocated string type
    let greeting_new = String::from("Hello, World!");
    println!("3. {}", greeting_new);
    // Strings -> Mutable shit
    let mut greet = String::from("Hello, ");
    greet.push_str("World!"); // modification
    println!("4. {}", greet);
    // Conversion handling
    let s = String::from("Hello, World!");
    let slice : &str = &s;
    println!("Conversion from string to slice : {}", slice);

    let slice0 = "Hello, World!";
    let s0 = slice0.to_string();
    println!("Conversion from slice to string : {}", s0);
}

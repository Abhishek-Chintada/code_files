use std::io;

use rand::Rng;


fn main() {
    let secretnumber = rand::thread_rng().gen_range(1..=100);
    println!("The secret number generated is : {secretnumber}");
    println!("Please input a number...");
    let mut guess = String::new();
    io::stdin()
        .read_line(&mut guess)
        .expect("failed to read line"); // this is a bad practice in general as it causes the
                                        // program to crash, instead we should handle the error.
    println!("You guesssed : {guess}");
}

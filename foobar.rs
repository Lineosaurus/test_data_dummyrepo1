// Function to add two numbers
fn add(a: i32, b: i32) -> i32 {
    a + b
}

fn main() {
    println!("Dummy Rust File");

    // Variables
    let num1 = 5;
    let num2 = 7;

    // Function call and output
    let result = add(num1, num2);
    println!("Result: {}", result);

    // Array example
    let colors = ["red", "green", "blue"];
    println!("Colors: {:?}", colors);

    // Tuple example
    let person = ("Alice", 30, "Engineer");
    println!("Person: {:?}", person);
}

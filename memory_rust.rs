fn display_value(value: &i32) {
    println!("Borrowed value: {}", value);
}

fn main() {
    let data = Box::new(100);

    println!("Allocated value: {}", data);

    display_value(&data);

    println!("Value after borrowing: {}", data);

    println!("Memory will be automatically released when data goes out of scope.");
}

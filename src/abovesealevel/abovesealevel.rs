use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let altitude: f64 = input.trim().parse().unwrap();
    println!("{:.4}", if altitude <= 0.0 { altitude } else { altitude - 0.3 }); 
}
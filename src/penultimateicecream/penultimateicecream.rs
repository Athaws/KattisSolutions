use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    
    input.clear();
    io::stdin().read_line(&mut input).unwrap();
    let mut prices: Vec<i32> = input
        .split_whitespace()
        .map(|s| s.parse().unwrap())
        .collect();
    
    prices.sort_unstable();
    println!("{}", prices[prices.len() - 2]);
}
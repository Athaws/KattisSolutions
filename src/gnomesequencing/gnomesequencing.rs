use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap();
    let n = input.trim().parse::<i32>().unwrap();
    println!("Gnomes:");
    for _ in 0..n {
        input.clear();
        io::stdin().read_line(&mut input).unwrap();
        let parts = input.split_ascii_whitespace().map(str::parse::<i32>).collect::<Result<Vec<_>, _>>().unwrap();
        println!("{}", if 
            parts.windows(2).all(|w| w[0] <= w[1]) || 
            parts.windows(2).all(|w| w[0] >= w[1])
        { "Ordered" } else { "Unordered" });
    }
}
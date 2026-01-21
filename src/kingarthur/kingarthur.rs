use std::io;
use std::io::BufRead;

fn main() {
    let stdin = io::stdin();
    let mut lines = stdin.lock().lines();
    let diameter: f64 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let width: f64 = lines.next().unwrap().unwrap().trim().parse().unwrap();
    let knights: f64 = lines.next().unwrap().unwrap().trim().parse().unwrap();

    let circumference = std::f64::consts::PI * diameter;
    println!("{}", if width * knights <= circumference { "YES" } else { "NO" });
}
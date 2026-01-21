use std::io;

fn main(){
    let mut inp = String::new();
    io::stdin().read_line(&mut inp).unwrap();
    let inp: i32 = inp.trim().parse().unwrap();
    for c in 1..13 {
        println!("{}", c*inp);
    }
}
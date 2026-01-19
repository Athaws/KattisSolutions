fn main() {
    let mut s = String::new();
    let _ = std::io::stdin().read_line(&mut s);
    let mut i = s.split_whitespace();
    let n: usize = i.next().unwrap().parse().unwrap();
    let m: usize = i.next().unwrap().parse().unwrap();
    let (mut t1, mut t2) = (0,0);
    s.clear();
    let _ = std::io::stdin().read_line(&mut s);
    s.split_whitespace().take(n).for_each(|x| t1 += x.parse::<i32>().unwrap());
    
    s.clear();
    let _ = std::io::stdin().read_line(&mut s);
    s.split_whitespace().take(m).for_each(|x| t2 += x.parse::<i32>().unwrap());

    println!("{}", if t1 > t2 {"Button 1"} else if t2 > t1 {"Button 2"} else {"Oh no"});
}
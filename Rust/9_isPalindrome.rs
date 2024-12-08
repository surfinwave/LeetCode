pub fn is_palindrome(x: i32) -> bool {
    let original = x;
    let mut reversed: i64 = 0;

    if original < 0 {
        return false;
    }

    let mut x = x;
    while x != 0 {
        let digit = x % 10;
        reversed = reversed * 10 + digit as i64;
        x /= 10;
    }

    original as i64 == reversed
}

fn main() {
    let result = is_palindrome(121);
    println!("{}", result);
}



//LEETCODE Q1009 //


/*Bilkul, main asaan bhaasha mein samjhaata hoon. Yeh code ek number ka bitwise complement nikalta hai. Chalo step by step samajhte hain.

1. **Class aur Function Definition:**
   ```cpp
   class Solution {
   public:
       int bitwiseComplement(int n) {
   ```
   Yahan pe ek `Solution` naam ki class define ki gayi hai aur usme ek public function `bitwiseComplement` define kiya gaya hai jo integer `n` ko input lega aur uska bitwise complement return karega.

2. **Variables ka Initialization:**
   ```cpp
   int m = n;
   int mask = 0;
   ```
   Yahan `n` ki ek copy `m` variable mein store ki gayi hai aur ek `mask` variable 0 se initialize kiya gaya hai. `mask` ko baad mein use karenge.

3. **Zero ka Special Case:**
   ```cpp
   if(n == 0){
       return 1;
   }
   ```
   Agar `n` zero hai, to function seedha 1 return kar dega, kyunki 0 ka bitwise complement 1 hota hai.

4. **Mask Banana:**
   ```cpp
   while(m != 0){
       mask = (mask << 1) | 1;
       m = m >> 1;
   }
   ```
   Yeh loop `mask` ko banata hai jo `n` ke binary form ke length ke barabar hota hai.

   - `mask = (mask << 1) | 1` ka matlab hai ki `mask` ko ek bit left shift karo aur least significant bit (LSB) pe 1 add karo.
   - `m = m >> 1` ka matlab hai ki `m` ko ek bit right shift karo.

   Example ke liye, agar `n` 5 hai (binary mein `101`), to loop ke baad `mask` `111` banega.

5. **Complement Calculate Karna:**
   ```cpp
   int ans = (~n) & mask;
   return ans;
   ```
   - `~n` ka matlab hai `n` ka bitwise NOT (matlab 0s ko 1s aur 1s ko 0s mein badal do).
   - `& mask` ka matlab hai `NOT` result ko mask ke saath bitwise AND karo taaki sirf original bits hi consider hoon.

   Example ke liye, agar `n` 5 hai (binary `101`):
   - `~n` hoga `...11111010` (32-bit system pe).
   - `mask` `00000111` hai.
   - Toh `(~n) & mask` `00000010` hoga, jo decimal mein 2 hai.

Akhri code phir se likhte hain comments ke saath:

```cpp
class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;

        // Agar n zero hai, to iska complement 1 hoga
        if(n == 0){
            return 1;
        }

        // Mask banana
        while(m != 0){
            mask = (mask << 1) | 1; // Mask ko left shift karo aur 1 add karo
            m = m >> 1; // m ko right shift karo
        }

        // Bitwise complement nikalna aur mask ke saath AND karna
        int ans = (~n) & mask;
        return ans;
    }
};
```

Is tarike se yeh code input number `n` ka bitwise complement calculate karta hai.
*/
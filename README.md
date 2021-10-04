## UVA10929_You_can_say 11_5
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=21&page=show_problem&problem=1870
-----
```c++
if((i+1)%2==1)
{
  odd+=(int)s[i]-'0';
}
else 
{
  even+=(int)s[i]-'0';
}
```
First you have to changed string s to (int) and check the each digit is odd or even. 
-----
```c++
if((odd-even)%11==0)
{
  ....
```
Check the number can divide by 11 or not.

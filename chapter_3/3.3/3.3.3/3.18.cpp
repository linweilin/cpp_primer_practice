/* 程序非法，因为没有先非空判断就下标访问
 * 正确的方式：使用push添加元素，而非下标形式
 * 应修改为:
 */

// vector对象的下标运算符[]只用于访问元素，而非增加元素。

vector<int> ivec;
ivec.push_back(42);
**160. 相交链表**

> 编写一个程序，找到两个单链表相交的起始节点。



**解题思路**

设a，b为链表A，B各自之非公共部分，c为两链表之公共部分，则：

​	链表A长度为：
$$
a+c
$$
​	链表B长度为：
$$
b+c
$$
当链表循环至尽头时，跳到另一链表之头部继续循环，显然：
$$
a+c+b = b+c+a
$$
此时两指针相等，即相交当起始节点。


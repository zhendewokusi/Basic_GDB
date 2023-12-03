# 前言

`Valgrind`这个工具布拉布拉。
但是这个工具不能检测内存泄漏和内存类型错误之外的问题。因此，我们需要gdb。
`GDB 的全称是 GNU Debugger`
"Caveman debugging" 这个词语的使用是一种夸张和幽默的说法，强调了使用最基本工具进行调试的原始感觉，好像程序员是在用石器时代的工具一样。


# GDB基本命令

b（break的缩写）命令在main()函数入口设置断点

r（run的缩写）命令开始执行程序，程序执行到main函数时，触发断点。

n（next的缩写）命令进行单步执行。

s（step的缩写）：单步调试如果有函数调用，则进入函数；与命令n不同，n是不进入调用的函数的

fin(finish的缩写)：直到当前函数完成返回，并打印函数返回时的堆栈地址和返回值及参数值等信息。

watch 表达式：设置一个监视点，一旦被监视的“表达式”的值改变，gdb将强行终止正在被调试的程序。如： watch a

bt / up / down / backtrace / frame / x / p

layout

info 

command / condition

until

tbreak

revese-step / c /

watch / awatch / rwatch
# GDB打印复杂数据结构

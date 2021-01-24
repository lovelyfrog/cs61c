gdb/cgdb 是用来在linux下调试c程序的工具（debugger），在mac下没有，作为替代可以使用lldb，不过会有一些命令和gdb有些许的不一样。

[lldb和gdb的命令对比](https://lldb.llvm.org/use/map.html)

在生成可执行文件的时候 

```bash
$ gcc -g -o hello hello.c
$ lldb hello
```

`-g` 是为了生成`gbd/lldb`所需要的信息。

然后可以在`lldb` 中设置断点，单步执行等调试功能。可以在上面的网址中查看。

如果在程序中需要用户输入信息，可以将需要输入的放入一个txt文件中，比如name.txt，然后使用redirection，在`lldb`设置

```bash
settings set target.input-path name.txt
```

然后再run即可


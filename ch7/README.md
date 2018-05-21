# 7.1
见代码。
#

# 7.2
见代码。
#

# 7.3
见代码。
#

# 7.4
见代码。
#

# 7.5
见代码。
#

# 7.6
见代码。
#

# 7.7
略。
#

# 7.8
因为read要对这个item的值进行修改，而print不修改item的值。
#

# 7.9
见代码。
#

# 7.10
读取两个data数据，看读取是否成功。
#

# 7.11
见代码。
#

# 7.12
见代码。
#

# 7.13
见代码。
#

# 7.14
见代码。
#

# 7.15
见代码。
#

# 7.16
没有限制，大家都可以访问的安全的成员应该放在public中，比较危险的不应该让大家访问的成员放在private中。
#

# 7.17
唯一的区别就是默认权限区别，struct默认public，class默认private。
#

# 7.18
封装类似于隐藏，把不希望暴露给使用者的成员或者函数实现隐藏起来。封装有两个优点，确保用户代码不会无意间破坏封装对象的状态；被封装的类的具体实现细节可以随时改变，而无需调整用户代码。
#

# 7.19
略。
#

# 7.20
友元可以使其他类或者其他函数访问他的非公有成员。优点是运用灵活，而缺点也明显，就是不够安全，这俩从来都是一对tradeoff。
#

# 7.21
见代码。
#

# 7.22
见代码。
#

# 7.23
见代码。
#

# 7.24
见代码。
#

# 7.25
应该能，因为有string，在默认拷贝的时候string应该是深拷贝，unsigned就不用说了肯定是复制拷贝。
#

# 7.26
见代码。
#

# 7.27
见代码。
#

# 7.28
如果没有引用的话也能编译运行，但是对set函数来说，对contents的修改就会失败。
#

# 7.29
略。
#

# 7.30
最重要的好处就是直观，不容易产生混淆，特别是在函数的形式参数和类内参数一样的情况下必须使用this来作区分。
#

# 7.31
见代码。
#

# 7.32
见代码。
#

# 7.33
有问题，应改为  
Screen::pos Screen::size() const  
{  
    return height * width;  
}
#

# 7.34
前面应该会报错，因为找不到pos的定义。
#

# 7.35
重复定义 Type 是错误的。
#

# 7.36
构造函数改为 X (int i, int j): base(i), rem(i % j) {}
#

# 7.37
first_item从stdin中输入，next调用默认构造函数，数据都为0，last只有bookNo为"9-999-99999-9"，其他数据都为0。
#

# 7.38
Sales_data(std::istream& is = std::cin);
#

# 7.39
不合法，当你调用 Sales_data()构造函数时，无法区分是哪个重载。
#

# 7.40
略。
#

# 7.41
见代码。
#

# 7.42
略。
#

# 7.43
a放源文件，b放头文件。
#

# 7.44
不合法，因为NoDefauld没有默认构造函数，需要提供初始化方法。
#

# 7.45
合法，因为C是有默认构造函数的，并且C里的默认构造函数初始化了其中的NoDefault。
#

# 7.46
(a)不一定，如果没有构造函数编译器会帮我们写默认构造函数。  
(b)不一定，每个参数都有默认值的构造函数也是默认构造函数。  
(c)正确。  
(d)正确。
#

# 7.47
个人认为应该用explicit，因为在程序员的角度里用Sales_data去和一个string做combine是不符合逻辑的，如果强行使用默认的转换实在是不够直观，容易出错。
#

# 7.48
是否定义explicit在这里好像没什么影响。
#

# 7.49
(a)正确。  
(b)引用没有地方承载，string不能直接转成Sales_data&。  
(c)最后一个const会限制*this的修改，不符合combine的逻辑。
#

# 7.50
见代码。
#

# 7.51
为了更符合逻辑，不容易产生歧义。
#

# 7.52
64页的Sales_data是一个类，不是聚合类，所以他需要用默认的初始化构造函数，则这里的初始化方式是有问题的，如果要改，应该把64页的Sales_data的类内初试值全部去掉。
#

# 7.53
见代码。
#

# 7.54
不能，因为constexpr必须有返回值。
#

# 7.55
不是，因为string不是字面值常量。
#

# 7.56
类似于函数的静态变量，优点就是多次调用的时候类是共享。
#

# 7.57
见代码。
#

# 7.58
类内只能初始化整型类型的静态常量，所以不能在类内初始化vec。
#
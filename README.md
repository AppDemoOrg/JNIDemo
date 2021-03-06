
### 为什么需要用JNI     
1、提高运行效率  
android的jni可以使用c/c++来开发，       
相比java而言，运行的效率提高了很多，        
特别是在做一些图像算法，或者游戏逻辑的时候，        
使用jni将大大的提高效率。比如某个游戏要采用opengl，       
同样加载一个由1000个多边形组成的3d模型，           
jni要比java运算快好几倍，这样就保证了游戏运行的fps不会太低。     

2、提高内存利用率     
另外一个好处就是内存管理上面，       
java的内存管理全部由虚拟机来管理，        
C++由程序员来管理，利用率上面就好多了。       

### 怎么使用JNI      

### 什么场景下使用JNI     
1、程序当中用到了JAVA API不提供的特殊系统环境才会有的特征。而跨进程操作又不现实       
2、与硬件/操作系统进行交互     
3、JAVA程序当中的一部分代码对效率要求非常高，如算法计算，图形渲染等         
4、你可能想访问一些己有的本地库，但又不想付出跨进程调用时的代价，如效率，内存，数据传递方面     
总结，只有当你必须在同一进程中调用本地代码时，再使用JNI     

### JNI副作用   
1、程序不再跨平台，要想跨平台，必须在不同的系统环境下重新编译本地语言部分     
2、程序不再是绝对安全的，本地代码的不当使用可能导致整个程序崩溃     
3、一个通用规则是，你应该让本地方法集中在少数几个类当中。这样就降低了JAVA和C之间的耦合性     

### JNI的替代方案   
1、JAVA程序和本地程序使用TCP/IP或者IPC进行交互  
2、当用JAVA程序连接本地数据库时，使用JDBC提供的API    
3、JAVA程序可以使用分布式对象技术，如JAVA IDL API    

### 参考文献     
1、[Android Studio jni开发入门——看我就够了](http://mobile.51cto.com/android-536653.htm)         
2、[android中JNI的用途及简单使用](https://blog.csdn.net/shirly_yy/article/details/53883736)        
3、[JNA简介及使用](http://forestqqqq.iteye.com/blog/1941631)         
4、[JNA—JNI终结者](https://blog.csdn.net/shendl/article/details/3589676)         
5、[android中JNI的用途及简单使用](https://blog.csdn.net/shirly_yy/article/details/53883736)       

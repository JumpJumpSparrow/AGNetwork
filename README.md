<p align="center" >
<img width="592" height="165"  src="https://raw.github.com/JumpJumpSparrow/AGNetworking/master/GrapesNetwork.png">
<p>  

# **About AquaGrapesNetWork**  

### 1. 需求分析  

1.  request -> 充分定制网络请求，包括：  
  * 请求头字段自定义添加
  * URL 定制灵活 
  * 参数传递 方便
  * 请求格式兼容 json 和 xm
  * 方便发起网络请求
  * 方便扩展和定制

2. response    
* 解析格式兼容 json 和 xml   
* 异常统计  
* 回调简单

### 2. 设计思想  
将每次网络请求 看作一次 独立的封装，做到每次请求可定制。就像一串葡萄一样，所有葡萄都是完整的，都有共同的特征，同时每粒葡萄都有自己的特征和个性。

  把一次网络请求 分为 三个阶段：
  1. 网络请求配置阶段
  2. 网络层集中处理请求
  3. response 解析、回调

#### 2.1 网络请求配置阶段

创建 request 实例，此实例集合所有网络请求需要包含的信息，网络请求响应以后 该实例还会持有 response 信息，实例的声明周期到 response 回调结束后释放。

统计信息处理: request 实例 根据回调 block 获取 必要信息, 完成具体报文上传

### 3. 内存管理

每次 发起 request 的生命流程为: 
1.数据聚集  
2.发起 request  
3.等待response   
4.处理 response  并解析数据   
5. 统计数据上传   
6.内存释放处理  

### 声明
 这个框架是基于 AFN 的二次封装
 
 

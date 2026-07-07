# 🚀 C 语言学习笔记

> 从小白到嵌入式 —— 一步一个脚印的成长记录

[![Language](https://img.shields.io/badge/language-C-00599C?style=flat-square&logo=c&logoColor=white)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Platform](https://img.shields.io/badge/platform-Windows-0078D6?style=flat-square&logo=windows&logoColor=white)](https://www.microsoft.com/windows)

---

## 📖 项目简介

这是一个 C 语言学习过程中的代码仓库，记录了从基础语法到单片机嵌入式开发的成长路径。包含大量实战练习、算法实现和模块化编程示例。

## 🗂️ 内容概览

### 🔧 核心模块

| 模块 | 说明 |
|------|------|
| **函数指针计算器** | 使用函数指针数组实现加减乘除，遵循开闭原则 |
| **动态内存管理** | `malloc` / `calloc` / `free` 的实战应用 |
| **通讯录系统** | 基于结构体的联系人增删改查 |
| **自定义字符串库** | 手写 `my_strcpy` / `my_strstr` / `my_memcpy` 等 |

### 📚 知识点覆盖

- **指针进阶** — 函数指针、指针数组、数组指针、回调函数
- **结构体** — 内存对齐、结构体嵌套、`qsort` 排序结构体
- **字符串操作** — `strtok` / `strerror` / `strstr` / `strncmp`
- **内存操作** — `memcpy` / `memmove` / `memcmp` / `memset`
- **排序算法** — 冒泡排序、快速排序（`qsort`）
- **位运算** — 二进制中 1 的个数统计

### 🧩 算法练习

- 🔢 杨辉三角
- 💐 水仙花数（0-100000）
- 🔍 二维数组矩阵查找
- 🔄 字符串左旋判断
- 📐 矩阵转置
- ◆ 打印菱形图案
- 📊 有序数列合并
- 🎯 奇偶分离（双指针法）

## 🚀 快速开始

### 环境要求

- **编译器**: GCC / MSVC（支持 C99 标准）
- **系统**: Windows / Linux / macOS

### 编译运行

```bash
# 使用 GCC 编译
gcc -o test test.c -lm

# 运行
./test
```

## 📁 项目结构

```
myproject/
├── test.c          # 主代码文件（学习笔记与练习）
├── output/         # 编译输出目录
├── README.md       # 项目说明
└── .vscode/        # VSCode 配置
```

## 🎯 设计亮点

```c
// 函数指针数组实现计算器 —— 开闭原则
// 新增运算只需添加函数，无需修改框架代码
int (*pf[5])(int, int) = {0, Add, Sub, Mul, Div};

void calc(int (*p)(int, int)) {
    int x, y;
    printf("请输入两个整数: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("输入格式错误！");
        while (getchar() != '\n');
        return;
    }
    printf("结果: %d\n", p(x, y));
}
```

## 🗺️ 学习路线

```mermaid
graph LR
    A[基础语法] --> B[指针]
    B --> C[函数指针]
    C --> D[结构体]
    D --> E[动态内存]
    E --> F[数据结构]
    F --> G[单片机/嵌入式]
```

## 📝 更新日志

| 日期 | 内容 |
|------|------|
| 2025-06 | 优化 calc 函数指针计算器，添加中文注释 |
| 2025-06 | 动态内存管理学习（malloc/calloc/free） |
| 2025-04 | 结构体内存对齐、qsort 排序练习 |
| 2025-03 | 基础语法、字符串函数实现 |

## ⭐ 致谢

感谢所有开源社区和 C 语言前辈们的无私奉献。

---

<p align="center">
  <sub>持续更新中 · Happy Coding ✨</sub>
</p>

#ifndef CP_CHARPLUS_H
#define CP_CHARPLUS_H

/**
 * @brief CP_CharPlus类用于扩展字符功能，特别是绘制加号。
 * 
 * 该类围绕一个字符构建，提供了一个方法来绘制加号。
 * 初始字符可以通过构造函数进行设置，默认为加号。
 */
class CP_CharPlus
{
public:
    /// 存储字符的成员变量。
    char m_char;

    /**
     * @brief 构造函数，用于初始化字符。
     * 
     * @param a 构造时要设置的字符，默认为加号。
     */
    CP_CharPlus(char a='+') : m_char(a) {}

    /// 析构函数，用于清理资源或执行收尾工作。
    ~CP_CharPlus() {}

    /**
     * @brief 在屏幕上绘制加号。
     * 
     * 该方法具体实现加号的绘制逻辑。由于实现细节不在此处展示，
     * 因此这里只提供方法的声明。
     */
    void mb_drawPLus();
};
#endif
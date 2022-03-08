#ifndef STYLE_H
#define STYLE_H
#include <QColor>

enum pointType{
    rifle, //步枪 点形状
    shotgun //霰弹枪 圆圈形状
};

struct penSize{
   int size;
   int maxSize;
   int minSize;
};

class Style
{
public:
    explicit Style(QColor param1=::QColor(0,255,0),pointType param2=pointType::rifle,
                   struct penSize param3=::penSize{4,8,1});

    pointType pointType() const;
    void setPointType(enum pointType newPointType);


    const penSize &penSize() const;
    void setPenSize(const struct penSize &newPenSize);

    const QColor &colorType() const;
    void setColorType(const QColor &newColorType);

private:
    QColor mColorType;
    enum pointType mPointType;
    struct penSize mPenSize;

};

#endif // STYLE_H

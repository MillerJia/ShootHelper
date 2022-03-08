#include "style.h"

Style::Style(QColor param1, enum pointType param2,struct penSize param3)
{
    mColorType = param1;
    mPointType = param2;
    mPenSize = param3;
}

pointType Style::pointType() const
{
    return mPointType;
}

void Style::setPointType(enum pointType newPointType)
{
    mPointType = newPointType;
}

const penSize &Style::penSize() const
{
    return mPenSize;
}

void Style::setPenSize(const struct penSize &newPenSize)
{
    mPenSize = newPenSize;
}

const QColor &Style::colorType() const
{
    return mColorType;
}

void Style::setColorType(const QColor &newColorType)
{
    mColorType = newColorType;
}


#ifndef PIXELTYPE_H
#define PIXELTYPE_H

#include <QString>
#include <QVector>

//each color has value comprise in [0,255]
struct pixel
{
    qint32 R; //Red
    qint32 G; //Green
    qint32 B; //Blue
};

struct PPMpicture
{
    QString PPMformat; // P3 -> ASCII PPM
    quint32 length;
    quint32 width;
    QVector<pixel> picture;
};

#endif

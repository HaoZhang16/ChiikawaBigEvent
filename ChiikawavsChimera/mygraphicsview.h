#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include<QGraphicsView>
#include<QMouseEvent>
#include<QEvent>

class myGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit myGraphicsView();
    bool eventFilter(QObject *obj, QEvent *event) override;


 signals:
};

#endif // MYGRAPHICSVIEW_H

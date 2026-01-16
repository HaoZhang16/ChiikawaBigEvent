#include "mygraphicsview.h"
#include"gamewidget.h"
#include<QDebug>

myGraphicsView::myGraphicsView()
{
    viewport()->installEventFilter(this);
}

bool myGraphicsView::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == viewport()) {
        switch(event->type())
        {
        case QEvent::MouseButtonPress:
            qDebug() << "MouseButtonPress";
            GameWidget::widget->mousePressEvent(static_cast<QMouseEvent*>(event));
            return true;
        case QEvent::MouseButtonRelease:
            qDebug() << "MouseButtonRelease";
            GameWidget::widget->mouseReleaseEvent(static_cast<QMouseEvent*>(event));
            return true;
        case QEvent::MouseMove:
            GameWidget::widget->mouseMoveEvent(static_cast<QMouseEvent*>(event));
            return true;
        default:
            break;
        }
    }
    return QGraphicsView::eventFilter(obj, event);
}

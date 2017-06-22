#include <QGuiApplication>
#include <QWindow>
#include <QQmlApplicationEngine>
#include <QStack>
#include <QQuickView>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QStack<QQuickView> aa;

    QQuickView viewer;
    viewer.setResizeMode(QQuickView::SizeRootObjectToView);
    viewer.setSource(QUrl("qrc:/main.qml"));
//    viewer.show();

    QQuickView viewer2;
    viewer2.setResizeMode(QQuickView::SizeRootObjectToView);
    viewer2.setSource(QUrl("qrc:/qmlSource/win.qml"));
    viewer2.hide();

    return app.exec();
}

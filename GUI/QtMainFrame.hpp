#include <QtGui>

class CellX3 : public CellX3MainFrame
Q_OBJECT
public
CellX3();
private slots:
void open();
void save();
void quit();
private:
QAction *openAction;
QAction *exitAction;
QMenu *fileMenu;
CellX3::CellX3()
{
saveAction = new QAction(tr("&Open"), this);
exitAction = new QAction(tr("&Exit"), this);
connect(openAction, SIGNAL(triggered()), this, SLOT(open()));
connect(exitAction, SIGNAL(triggered()), qApp, SLOT(quit()));
fileMenu = menuBar()->addMenu(tr("&File"));
fileMenu->addAction(openAction);
fileMenu->addSeparator();
fileMenu->addAction(exitAction);
};
void CellXMain::createMenus()
{


    fileMenu = menuBar()->addMenu(tr("&File"));


    fileMenu->addAction(newAct);


    fileMenu->addAction(openAct);
}

#include "mainwindow.h"

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
{
	_addressLineEditPtr = std::make_shared<QLineEdit>();
	_portLineEditPtr = std::make_shared<QLineEdit>();
	_fileNameLineEdit = std::make_shared<QLineEdit>();

	_connectPushButtonPtr = std::make_shared<QPushButton>(QObject::tr("Connect"));
	QObject::connect(_connectPushButtonPtr.get(), &QPushButton::clicked, this, &MainWindow::slotConnectClicked);

	_selectPushButtonPtr = std::make_shared<QPushButton>(QObject::tr("Select file"));
	QObject::connect(_selectPushButtonPtr.get(), &QPushButton::clicked, this, &MainWindow::slotSelectClicked);

	_startPushButtonPtr = std::make_shared<QPushButton>(QObject::tr("Start"));
	QObject::connect(_startPushButtonPtr.get(), &QPushButton::clicked, this, &MainWindow::slotStartClicked);

	_stopPushButtonPtr = std::make_shared<QPushButton>(QObject::tr("Stop"));
	QObject::connect(_stopPushButtonPtr.get(), &QPushButton::clicked, this, &MainWindow::slotStopClicked)

	QGridLayout* pGridLayout = new QGridLayout;
	pGridLayout->addWidget(new QLabel(QObject::tr("IP Address")), 0, 0, 1, 5);
	pGridLayout->addWidget(_addressLineEditPtr.get(), 1, 0, 1, 5);

	pGridLayout->addWidget(new QLabel(QObject::tr("Port")), 0, 6, 1, 1, Qt::AlignLeft);
	pGridLayout->addWidget(_portLineEditPtr.get(), 1, 6, 1, 1, Qt::AlignLeft);
	pGridLayout->addWidget(_connectPushButtonPtr.get(), 1, 7, 1, 1, Qt::AlignLeft);

	pGridLayout->addWidget(new QLabel(QObject::tr("Program file")), 2, 0, 1, 1, Qt::AlignLeft);
	pGridLayout->addWidget(_fileNameLineEdit.get(), 3, 0, 1, 5);
	pGridLayout->addWidget(_selectPushButtonPtr.get(), 3, 6, 1, 1, Qt::AlignLeft);

	pGridLayout->addWidget(_startPushButtonPtr.get(), 4, 0, 1, 1, Qt::AlignLeft);
	pGridLayout->addWidget(_stopPushButtonPtr.get(), 4, 2, 1, 1, Qt::AlignLeft);
	pGridLayout->setVerticalSpacing(5);

	QWidget* pCentralWidget = new QWidget(this);
	pCentralWidget->setLayout(pGridLayout);
	setCentralWidget(pCentralWidget);
}

void MainWindow::slotConnectClicked()
{
}

void MainWindow::slotSelectClicked()
{
}

void MainWindow::slotStartClicked()
{
}

void MainWindow::slotStopClicked()
{
}

#pragma once

#include <QMainWindow>

class QLineEdit;
class QPushButton;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

private:
    std::shared_ptr<QLineEdit> _addressLineEditPtr;
    std::shared_ptr<QLineEdit> _portLineEditPtr;
    std::shared_ptr<QLineEdit> _fileNameLineEdit;

    std::shared_ptr<QPushButton> _connectPushButtonPtr;
    std::shared_ptr<QPushButton> _selectPushButtonPtr;
    std::shared_ptr<QPushButton> _startPushButtonPtr;
    std::shared_ptr<QPushButton> _stopPushButtonPtr;

    void slotConnectClicked();    
    void slotSelectClicked();
    void slotStartClicked();
    void slotStopClicked();
};

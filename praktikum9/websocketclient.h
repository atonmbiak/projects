#ifndef WEBSOCKETCLIENT_H
#define WEBSOCKETCLIENT_H

#include <QTCore>
#include <QtWebSockets/QtWebSockets>

class WebSocketClient : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool connecting READ connecting NOTIFY stateChanged)
    Q_PROPERTY(bool connected READ connected NOTIFY stateChanged)
    Q_PROPERTY(QString username READ username WRITE setUsername NOTIFY usernameChanged)
    Q_PROPERTY(QString url READ url WRITE setUrl NOTIFY urlChanged)

    QWebSocket m_socket;
    QString m_username;
    QString m_url;

public:
    explicit WebSocketClient(QObject*parent = 0);
    virtual ~WebSocketClient();

    Q_INVOKABLE void sendMessage(const QString &textMessage);
    Q_INVOKABLE void open();
    Q_INVOKABLE void close();

    bool connecting() const;
    bool connected() const;

    QString username() const;
    void setUsername(QString username);

    QString url() const;
    void setUrl(QString url);

signals:
    void newMessageReceived(QJsonObject messageObject);
    void stateChanged();
    void usernameChanged(QString username);
    void urlChanged(QString url);

};





#endif // WEBSOCKETCLIENT_H

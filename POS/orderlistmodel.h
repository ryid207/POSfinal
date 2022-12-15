#ifndef ORDERLISTMODEL_H
#define ORDERLISTMODEL_H
#include <vector>
#include <pos.h>

#include <QAbstractItemModel>

class OrderListModel : public QAbstractItemModel
{
    Q_OBJECT

public:
    explicit OrderListModel(std::vector<POS> &Orders, QObject *parent = nullptr);

    // Basic functionality:
    QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const override;
    QModelIndex parent(const QModelIndex &index) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;

private:
    std::vector<POS> &Orders;
};

#endif // ORDERLISTMODEL_H

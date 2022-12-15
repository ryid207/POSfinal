#include "orderlistmodel.h"

OrderListModel::OrderListModel(std::vector<POS> &Orders, QObject *parent)
    : QAbstractItemModel(parent), Orders(Orders)
{
}

QModelIndex OrderListModel::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex OrderListModel::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int OrderListModel::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;
    else
     {
        return Orders.size();
     }
}

int OrderListModel::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant OrderListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    if(role==Qt::DisplayRole)
    {
        std::string displayOrder;
        for (auto it = Orders.begin(); it != Orders.end(); ++it)
        {

            displayOrder =+
        }
    }

    return QVariant();
}

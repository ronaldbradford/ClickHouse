#pragma once

#include <Storages/System/IStorageSystemOneBlock.h>


namespace DB
{

class Context;

class StorageSystemTransactions final : public IStorageSystemOneBlock<StorageSystemTransactions>
{
public:
    String getName() const override { return "SystemTransactions"; }

    static ColumnsDescription getColumnsDescription();

protected:
    using IStorageSystemOneBlock::IStorageSystemOneBlock;

    void fillData(MutableColumns & res_columns, ContextPtr context, const SelectQueryInfo & query_info) const override;
};

}

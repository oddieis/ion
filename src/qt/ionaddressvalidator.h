// Copyright (c) 2011-2014 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ION_QT_IONADDRESSVALIDATOR_H
#define ION_QT_IONADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinAddressEntryValidator(QObject* parent);

    State validate(QString& input, int& pos) const;
};

/** Bitcoin address widget validator, checks for a valid ion address.
 */
class BitcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinAddressCheckValidator(QObject* parent);

    State validate(QString& input, int& pos) const;
};

#endif // ION_QT_IONADDRESSVALIDATOR_H
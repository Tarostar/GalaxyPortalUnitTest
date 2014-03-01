#include <QString>
#include <QtTest>

class GalaxyPortalUnitTestTest : public QObject
{
    Q_OBJECT

public:
    GalaxyPortalUnitTestTest();

private Q_SLOTS:
    void initTestCase();
    void cleanupTestCase();
    void testCase1();
    void testCase1_data();
    void testCase2();
};

GalaxyPortalUnitTestTest::GalaxyPortalUnitTestTest()
{
}

void GalaxyPortalUnitTestTest::initTestCase()
{
}

void GalaxyPortalUnitTestTest::cleanupTestCase()
{
}

void GalaxyPortalUnitTestTest::testCase1()
{
    QFETCH(QString, data);
    QVERIFY2(true, "Failure");
}

void GalaxyPortalUnitTestTest::testCase1_data()
{
    QTest::addColumn<QString>("data");
    QTest::newRow("0") << QString();
}

void GalaxyPortalUnitTestTest::testCase2()
{
    QCOMPARE(QString("HELLO"), QString("HELLO"));

    int result = 0;
    QBENCHMARK {
             result = (QString("HELLO") == QString("HELLO"));
         }
    // 0.00060 msecs per iteration (total: 79, iterations: 131072)
    // 0.00057 msecs per iteration (total: 76, iterations: 131072)
}

QTEST_APPLESS_MAIN(GalaxyPortalUnitTestTest)

#include "tst_galaxyportalunittesttest.moc"

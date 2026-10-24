-- ConquerRebuild persistence schema (MySQL/MariaDB, database "cq").
-- Column names follow the original v6159 server: accounts.* from the
-- decompiled 2015 AccountServer (Database.cs), cq_user.* from the
-- decompiled MsgServer (UPDATE cq_user SET account_id=%u, uin=%u,
-- name='%s', ... SELECT id,name,account_id,uin,recordmap_id,level FROM
-- cq_user WHERE account_id='%u').

CREATE TABLE IF NOT EXISTS accounts (
  id        INT UNSIGNED NOT NULL,
  name      VARCHAR(32) NOT NULL,
  password  VARCHAR(64) NOT NULL,          -- plaintext, as the original
  banned    INT NOT NULL DEFAULT 0,
  type      INT NOT NULL DEFAULT 0,        -- 1 = GM account
  vip       INT NULL DEFAULT 0,
  macaddr   VARCHAR(32) NULL DEFAULT '',
  online_us INT NOT NULL DEFAULT 0,
  PRIMARY KEY (id),
  UNIQUE KEY uniq_name (name)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

CREATE TABLE IF NOT EXISTS cq_user (
  id              INT UNSIGNED NOT NULL,
  account_id      INT UNSIGNED NOT NULL,
  uin             BIGINT UNSIGNED NOT NULL DEFAULT 0,
  name            VARCHAR(16) NOT NULL,
  lastname        VARCHAR(16) NOT NULL DEFAULT '',
  lookface        INT          NOT NULL DEFAULT 0,
  hair            INT          NOT NULL DEFAULT 0,
  life            INT          NOT NULL DEFAULT 100,
  mana            INT          NOT NULL DEFAULT 100,
  money           INT UNSIGNED NOT NULL DEFAULT 0,
  emoney          INT          NOT NULL DEFAULT 0,
  recordmap_id    INT UNSIGNED NOT NULL DEFAULT 1002,
  recordx         INT          NOT NULL DEFAULT 400,
  recordy         INT          NOT NULL DEFAULT 300,
  strength        INT          NOT NULL DEFAULT 1,
  speed           INT          NOT NULL DEFAULT 1,
  health          INT          NOT NULL DEFAULT 1,
  soul            INT          NOT NULL DEFAULT 1,
  profession      INT          NOT NULL DEFAULT 0,
  business        INT          NOT NULL DEFAULT 0,
  level           INT UNSIGNED NOT NULL DEFAULT 1,
  mateid          INT UNSIGNED NOT NULL DEFAULT 0,
  title           INT          NOT NULL DEFAULT 0,
  channel_account VARCHAR(32)  NOT NULL DEFAULT '',
  gm              INT          NOT NULL DEFAULT 0,   -- dev: original uses cq_config gm list
  PRIMARY KEY (id),
  UNIQUE KEY uniq_name (name),
  KEY idx_account (account_id)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- Seed (dev): same two characters the tests use.
INSERT INTO accounts (id, name, password, banned, type, vip) VALUES
  (100001, 'TestKnight', 'test123', 0, 0, 0),
  (100002, 'GmDragon',   'test123', 0, 1, 0)
ON DUPLICATE KEY UPDATE name=VALUES(name);

INSERT INTO cq_user (id, account_id, name, lookface, hair, life, mana,
                     recordmap_id, recordx, recordy, level, profession, gm) VALUES
  (1, 100001, 'TestKnight', 100003, 15, 2000, 1500, 1002, 400, 300, 130, 10, 0),
  (2, 100002, 'GmDragon',   100004, 30, 3000, 2000, 1002, 405, 300, 140, 10, 1)
ON DUPLICATE KEY UPDATE name=VALUES(name);

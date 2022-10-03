#define CMDLENGTH 45
#define DELIMITER " | "
/* #define CLICKABLE_BLOCKS */
/* #define LEADING_DELIMITER */

const Block blocks[] = {
    BLOCK("volume_master.sh", 5, 16),
    BLOCK("battery.sh", 5, 18),
    BLOCK("freespace", 5, 19),
    BLOCK("freeram.sh", 5, 20),
    BLOCK("docker_bar", 5, 21),
    BLOCK("date.sh", 5, 17),
};

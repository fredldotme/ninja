#ifndef SUBPROCESS_IOS
#define SUBPROCESS_IOS

int
ios_posix_spawnattr_init(posix_spawnattr_t *attr)
{
	return 0;
}

int
ios_posix_spawnattr_destroy(posix_spawnattr_t *attr)
{
	return 0;
}


int
ios_posix_spawnattr_setflags(posix_spawnattr_t *attr, short flags)
{
	return 0;
}


int
ios_posix_spawnattr_setpgroup(posix_spawnattr_t * attr, pid_t pgroup)
{
	return 0;
}

int
ios_posix_spawnattr_setsigmask(posix_spawnattr_t * __restrict attr,
		const sigset_t * __restrict sigmask)
{
	return 0;
}

int
ios_posix_spawn_file_actions_init(posix_spawn_file_actions_t *file_actions)
{
	return 0;
}


int
ios_posix_spawn_file_actions_destroy(posix_spawn_file_actions_t *file_actions)
{
	return 0;
}


int
ios_posix_spawn_file_actions_addopen(
		posix_spawn_file_actions_t * __restrict file_actions,
		int filedes, const char * __restrict path, int oflag,
		mode_t mode)
{
	return 0;
}


int
ios_posix_spawn_file_actions_addclose(posix_spawn_file_actions_t *file_actions,
		int filedes)
{
	return 0;
}


int
ios_posix_spawn_file_actions_adddup2(posix_spawn_file_actions_t *file_actions,
		int filedes, int newfiledes)
{
	return 0;
}


int
ios_posix_spawn(pid_t * __restrict pid, const char * __restrict path,
		const posix_spawn_file_actions_t *file_actions,
		const posix_spawnattr_t * __restrict attrp,
		char *const argv[ __restrict], char *const envp[ __restrict])
{
	return 0;
}

#endif
